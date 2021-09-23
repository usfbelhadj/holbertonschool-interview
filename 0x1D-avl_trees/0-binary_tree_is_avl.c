#include "binary_trees.h"


/**
* is_bst_recursive - recursive
* @tree: pointer
* @max: maximum value
* @min: minimum value
* Return: 1 ? 0
*/
int is_bst_recursive(const binary_tree_t *tree, int min, int max)
{
int local_min = min, local_max = max, left = 0, right = 0;

if (tree == NULL)
return (1);
if (tree->n == min || tree->n == max)
return (0);
if (tree->left)
local_min = tree->left->n;
if (tree->right)
local_max = tree->right->n;
if (tree->n <= local_min || tree->n >= local_max)
return (0);
if (local_min == min && local_max == max)
return (1);
left = is_bst_recursive(tree->left, min, tree->n);
right = is_bst_recursive(tree->right, tree->n, max);
return (left *right);
}

/**
* is_balanced_preorder - Func
* balanced = var that make a balnce
* @tree: pointer
* Return: 1 ? 0
*/
int is_balanced_preorder(const binary_tree_t *tree)
{
int balanced = 0;

if (tree == NULL)
return (1);

balanced = is_balanced(tree);
if (balanced  == 0)
return (0);
balanced = is_balanced_preorder(tree->left);
if (balanced == 0)
return (0);
balanced = is_balanced_preorder(tree->right);
if (balanced == 0)
return (0);
return (1);
}






/**
* is_balanced - Func
* balanced = var that make a balnce
* @tree: pointer
* Return: 1 ? 0
*/
int is_balanced(const binary_tree_t *tree)
{
int left = 0, right = 0, balance_factor = 0;

if (tree == NULL)
return (0);

left = height_helper(tree->left);
right = height_helper(tree->right);

balance_factor = left - right;
if (balance_factor >= -1 && balance_factor <= 1)
return (1);

return (0);
}

/**
* height_helper - Func
* @tree: pointer
* Return: max root
*/
size_t height_helper(const binary_tree_t *tree)
{
size_t left = 0, right = 0;

if (tree == NULL)
return (0);

left = (1 + height_helper(tree->left));
right = (1 + height_helper(tree->right));

if (left > right)
return (left);

return (right);
}

/**
* binary_tree_is_avl - Func
* @tree: pointer
* Return: 1 ? 0
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
int check = 0;

if (tree == NULL)
return (0);
check = is_bst_recursive(tree, INT_MIN, INT_MAX);
if (check == 0)
return (0);
check = is_balanced_preorder(tree);
if (check == 0)
return (0);
return (1);
}
