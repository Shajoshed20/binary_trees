# 0x1D. C - Binary trees

## General Learning Objectives :page_with_curl:

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

## Data structures :file_folder:
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

### Binary Search Tree
typedef struct binary_tree_s bst_t;

### AVL Tree
typedef struct binary_tree_s avl_t;

### Max Binary Heap
typedef struct binary_tree_s heap_t;

## Function Prototypes :floppy_disk:

| File                             | Prototype                                                                                        |
| -------------------------------- | ------------------------------------------------------------------------------------------------ |
| `binary_tree_print.c`            | `void binary_tree_print(const binary_tree_t *tree)`                                              |
| `0-binary_tree_node.c`           | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`                             |
| `1-binary_tree_insert_left.c`    | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`                      |
| `2-binary_tree_insert_right.c`   | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`                     |
| `3-binary_tree_delete.c`         | `void binary_tree_delete(binary_tree_t *tree);`                                                  |
| `4-binary_tree_is_leaf.c`        | `int binary_tree_is_leaf(const binary_tree_t *node);`                                            |
| `5-binary_tree_is_root.c`        | `int binary_tree_is_root(const binary_tree_t *node);`                                            |
| `6-binary_tree_preorder.c`       | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`                       |
| `7-binary_tree_inorder.c`        | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`                        |
| `8-binary_tree_postorder.c`      | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`                      |
| `9-binary_tree_height.c`         | `size_t binary_tree_height(const binary_tree_t *tree);`                                          |
| `10-binary_tree_depth.c`         | `size_t binary_tree_depth(const binary_tree_t *tree);`                                           |
| `11-binary_tree_size.c`          | `size_t binary_tree_size(const binary_tree_t *tree);`                                            |
| `12-binary_tree_leaves.c`        | `size_t binary_tree_leaves(const binary_tree_t *tree);`                                          |
| `13-binary_tree_nodes.c`         | `size_t binary_tree_nodes(const binary_tree_t *tree);`                                           |
| `14-binary_tree_balance.c`       | `int binary_tree_balance(const binary_tree_t *tree);`                                            |
| `15-binary_tree_is_full.c`       | `int binary_tree_is_full(const binary_tree_t *tree);`                                            |
| `16-binary_tree_is_perfect.c`    | `int binary_tree_is_perfect(const binary_tree_t *tree);`                                         |
| `17-binary_tree_sibling.c`       | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`                                       |
| `18-binary_tree_uncle.c`         | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`                                         |
| `100-binary_trees_ancestor.c`    | `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);` |
| `101-binary_tree_levelorder.c`   | `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`                     |
| `102-binary_tree_is_complete.c`  | `int binary_tree_is_complete(const binary_tree_t *tree);`                                        |
| `103-binary_tree_rotate_left.c`  | `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`                                   |
| `104-binary_tree_rotate_right.c` | `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`                                  |
| `110-binary_tree_is_bst.c`       | `int binary_tree_is_bst(const binary_tree_t *tree);`                                             |
| `111-bst_insert.c`               | `bst_t *bst_insert(bst_t **tree, int value);`                                                    |
| `112-array_to_bst.c`             | `bst_t *array_to_bst(int *array, size_t size);`                                                  |
| `113-bst_search.c`               | `bst_t *bst_search(const bst_t *tree, int value);`                                               |
| `114-bst_remove.c`               | `bst_t *bst_remove(bst_t *root, int value);`                                                     |
| `120-binary_tree_is_avl.c`       | `int binary_tree_is_avl(const binary_tree_t *tree);`                                             |
| `121-avl_insert.c`               | `avl_t *avl_insert(avl_t **tree, int value);`                                                    |
| `122-array_to_avl.c`             | `avl_t *array_to_avl(int *array, size_t size);`                                                  |

## Tasks :white_check_mark:

* Task 0 - Write a function that creates a binary tree node
    - Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
    - Where parent is a pointer to the parent node of the node to create
    - And value is the value to put in the new node
    - When created, a node does not have any child
    - Your function must return a pointer to the new node, or NULL on failure

* Task 1 - Write a function that inserts a node as the left-child of another node
    - Prototype: binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
    - Where parent is a pointer to the node to insert the left-child in
    - And value is the value to store in the new node
    - Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    - If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

* Task 2 - Write a function that inserts a node as the right-child of another node
    - Prototype: binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
    - Where parent is a pointer to the node to insert the right-child in
    - And value is the value to store in the new node
    - Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
    - If parent already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.

* Task 3 - Write a function that deletes an entire binary tree
    - Prototype: void binary_tree_delete(binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to delete
    - If tree is NULL, do nothing

* Task 4 - Write a function that checks if a node is a leaf
    - Prototype: int binary_tree_is_leaf(const binary_tree_t *node);
    - Where node is a pointer to the node to check
    - Your function must return 1 if node is a leaf, otherwise 0
    - If node is NULL, return 0

* Task 5 - Write a function that checks if a given node is a root
    - Prototype: int binary_tree_is_root(const binary_tree_t *node);
    - Where node is a pointer to the node to check
    - Your function must return 1 if node is a root, otherwise 0
    - If node is NULL, return 0

* Task 6 - Write a function that goes through a binary tree using pre-order traversal
    - Prototype: void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
    - Where tree is a pointer to the root node of the tree to traverse
    - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If tree or func is NULL, do nothing

* Task 7 - Write a function that goes through a binary tree using in-order traversal
    - Prototype: void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
    - Where tree is a pointer to the root node of the tree to traverse
    - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If tree or func is NULL, do nothing

* Task 8 - Write a function that goes through a binary tree using post-order traversal
    - Prototype: void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
    - Where tree is a pointer to the root node of the tree to traverse
    - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If tree or func is NULL, do nothing

* Task 9 - Write a function that measures the height of a binary tree
    - Prototype: size_t binary_tree_height(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to measure the height.
    - If tree is NULL, your function must return 0

* Task 10 - Write a function that measures the depth of a node in a binary tree
    - Prototype: size_t binary_tree_depth(const binary_tree_t *tree);
    - Where tree is a pointer to the node to measure the depth
    - If tree is NULL, your function must return 0

* Task 11 - Write a function that measures the size of a binary tree
    - Prototype: size_t binary_tree_size(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to measure the size
    - If tree is NULL, the function must return 0

* Task 12 - Write a function that counts the leaves in a binary tree
    - Prototype: size_t binary_tree_leaves(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to count the number of leaves
    - If tree is NULL, the function must return 0
    - A NULL pointer is not a leaf

* Task 13 - Write a function that counts the nodes with at least 1 child in a binary tree
    - Prototype: size_t binary_tree_nodes(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to count the number of nodes
    - If tree is NULL, the function must return 0
    - A NULL pointer is not a node

* Task 14 - Write a function that measures the balance factor of a binary tree
    - Prototype: int binary_tree_balance(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to measure the balance factor
    - If tree is NULL, return 0

* Task 15 - Write a function that checks if a binary tree is full
    - Prototype: int binary_tree_is_full(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to check
    - If tree is NULL, your function must return 0

* Task 16 - Write a function that checks if a binary tree is perfect
    - Prototype: int binary_tree_is_perfect(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to check
    - If tree is NULL, your function must return 0

* Task 17 - Write a function that finds the sibling of a node
    - Prototype: binary_tree_t *binary_tree_sibling(binary_tree_t *node);
    - Where node is a pointer to the node to find the sibling
    - Your function must return a pointer to the sibling node
    - If node is NULL or the parent is NULL, return NULL
    - If node has no sibling, return NULL

* Task 18 - 
* Task 19 - 
* Task 20 - 
* Task 21 - 
* Task 22 - 
* Task 23 - 

* Task 24 - Write a function that checks if a binary tree is a valid Binary Search Tree
    - Prototype: int binary_tree_is_bst(const binary_tree_t *tree);
    - Where tree is a pointer to the root node of the tree to check
    - Your function must return 1 if tree is a valid BST, and 0 otherwise
    - If tree is NULL, return 0

* Task 25 - Write a function that inserts a value in a Binary Search Tree
    - Prototype: bst_t *bst_insert(bst_t **tree, int value);
    - Where tree is a double pointer to the root node of the BST to insert the value
    - And value is the value to store in the node to be inserted
    - Your function must return a pointer to the created node, or NULL on failure
    - If the address stored in tree is NULL, the created node must become the root node.
    - If the value is already present in the tree, it must be ignored

* Task 26 - Write a function that builds a Binary Search Tree from an array
    - Prototype: bst_t *array_to_bst(int *array, size_t size);
    - Where array is a pointer to the first element of the array to be converted
    - And size is the number of element in the array
    - Your function must return a pointer to the root node of the created BST, or NULL on failure
    - If a value of the array is already present in the tree, this value must be ignored

* Task 27 - Write a function that searches for a value in a Binary Search Tree
    - Prototype: bst_t *bst_search(const bst_t *tree, int value);
    - Where tree is a pointer to the root node of the BST to search
    - And value is the value to search in the tree
    - Your function must return a pointer to the node containing a value equals to value
    - If tree is NULL or if nothing is found, your function must return NULL

* Task 28 - 

* Task 29 - 

* Task 30 - 
* Task 31 - 
* Task 32 - 
* Task 33 - 
* Task 34 - 
* Task 35 - 

* Task 36 - 

* Task 37 - 

* Task 38 - 

* Task 39 - 

* Task 40 - 

* Task 41 - 
