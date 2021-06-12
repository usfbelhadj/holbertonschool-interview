#!/usr/bin/python3

import requests
import json
from collections import Counter, defaultdict


def count_words(subreddit, word_list, res=defaultdict(int), after=None):
    """ Write a recursive function that queries the Reddit API, parses the
    title of all hot articles, and prints a sorted count of given keywords
    (case-insensitive, delimited by spaces.
    Javascript should count as javascript,
    but java should not). """

    headers = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64)\
            AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.97\
            Safari/537.36"}
    url = 'https://www.reddit.com/r/{}/hot.json'.format(subreddit)
    if after:
        url += '?after={}'.format(after)
    try:
        req = requests.get(url, headers=headers)
        data = req.json()
        titles = data.get('data').get('children')
        for i in titles:
            count_word = Counter(i.get('data').get('title').lower().split(' '))
            for word in word_list:
                if word.lower() in count_word:
                    res[word.lower()] += count_word.get(word.lower())
        after = data.get('data').get('after')
        if after:
            return count_words(subreddit, word_list, res, after)
        first_sort = sorted(res.items(), key=lambda x: x[0])
        for k, v in sorted(first_sort, key=lambda x: x[1], reverse=True):
            print('{}: {}'.format(k, v))
    except Exception as ex:
        return ex
