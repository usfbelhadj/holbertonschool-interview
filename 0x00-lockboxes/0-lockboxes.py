#!/usr/bin/python3
# Lock Boxes Interview


def canUnlockAll(boxes):
    """Solving canUnlockAll"""
    if not isinstance(boxes, list):
        return False
    if len(boxes) == 0:
        return True
    if boxes[0] == []:
        return False
    new_list = [0]
    for num_boxes in range(len(boxes)):
        for i in boxes[num_boxes]:
            if i != num_boxes:
                if (i not in new_list) and (i < len(boxes)):
                    new_list.append(i)
    if len(new_list) == len(boxes):
        return True
    return False
