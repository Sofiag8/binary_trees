<h1 class="gap">Project 0x1D. C - Binary trees</h1>

<h2>Learning Objectives</h2>

<h3>General</h3>

<ul>
<li>What is a binary tree</li>
<li>What is the difference between a binary tree and a Binary Search Tree</li>
<li>What is the possible gain in terms of time complexity compared to linked lists</li>
<li>What are the depth, the height, the size of a binary tree</li>
<li>What are the different traversal methods to go through a binary tree</li>
<li>What is a complete, a full, a perfect, a balanced binary tree</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
<li>Your programs and functions will be compiled with <code>gcc 4.8.4</code> using the flags <code>-Wall</code> <code>-Werror</code> <code>-Wextra</code> and <code>-pedantic</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the standard library</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions should be included in your header file called <code>binary_trees.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h3>Github</h3>

<p><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>

<h2>More Info</h2>

<h3>Data structures</h3>

<p>Please use the following data structures and types for binary trees. Don&rsquo;t forget to include them in your header file.</p>

<h4>Basic Binary Tree</h4>

<pre><code>/**
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
</code></pre>

<h4>Binary Search Tree</h4>

<pre><code>typedef struct binary_tree_s bst_t;
</code></pre>

<h4>AVL Tree</h4>

<pre><code>typedef struct binary_tree_s avl_t;
</code></pre>

<h4>Max Binary Heap</h4>

<pre><code>typedef struct binary_tree_s heap_t;
</code></pre>

<hr class="gap">
<h2 class="gap">Tasks</h2>

 <h4 class="task">
    0. New node
</h4>
<p>Write a function that creates a binary tree node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the parent node of the node to create</li>
<li>And <code>value</code> is the value to put in the new node</li>
<li>When created, a node does not have any child</li>
<li>Your function must return a pointer to the new node, or <code>NULL</code> on failure</li>
</ul>

 <h4 class="task">
    1. Insert left
</h4>
 <p>Write a function that inserts a node as the left-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the left-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.</li>
</ul>

  <h4 class="task">
    2. Insert right
</h4>
 <p>Write a function that inserts a node as the right-child of another node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);</code></li>
<li>Where <code>parent</code> is a pointer to the node to insert the right-child in</li>
<li>And <code>value</code> is the value to store in the new node</li>
<li>Your function must return a pointer to the created node, or <code>NULL</code> on failure or if <code>parent</code> is <code>NULL</code></li>
<li>If <code>parent</code> already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.</li>
</ul>

  <h4 class="task">
    3. Delete
</h4>
 <p>Write a function that deletes an entire binary tree</p>

<ul>
<li>Prototype: <code>void binary_tree_delete(binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to delete</li>
<li>If <code>tree</code> is <code>NULL</code>, do nothing</li>
</ul>

 <h4 class="task">
    4. Is leaf
</h4>
<p>Write a function that checks if a node is a leaf</p>

<ul>
<li>Prototype: <code>int binary_tree_is_leaf(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a leaf, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>

<h4 class="task">
    5. Is root
</h4>
 <p>Write a function that checks if a given node is a root</p>

<ul>
<li>Prototype: <code>int binary_tree_is_root(const binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to check</li>
<li>Your function must return <code>1</code> if <code>node</code> is a root, otherwise <code>0</code></li>
<li>If <code>node</code> is <code>NULL</code>, return <code>0</code></li>
</ul>

 <h4 class="task">
    6. Pre-order traversal
</h4>
<p>Write a function that goes through a binary tree using pre-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>

<h4 class="task">
    7. In-order traversal
</h4>
<p>Write a function that goes through a binary tree using in-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>

<h4 class="task">
    8. Post-order traversal
</h4>
<p>Write a function that goes through a binary tree using post-order traversal</p>

<ul>
<li>Prototype: <code>void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to traverse</li>
<li>And <code>func</code> is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.</li>
<li>If <code>tree</code> or <code>func</code> is <code>NULL</code>, do nothing</li>
</ul>

  <h4 class="task">
    9. Height
</h4>
<p>Write a function that measures the height of a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_height(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the height.</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>

<h4 class="task">
    10. Depth
</h4>
<p>Write a function that measures the depth of a node in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_depth(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the node to measure the depth</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>

  <h4 class="task">
    11. Size
</h4>
 <p>Write a function that measures the size of a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_size(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the size</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
</ul>

<h4 class="task">
    12. Leaves
</h4>
<p>Write a function that counts the leaves in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_leaves(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of leaves</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a leaf</li>
</ul>


<h4 class="task">
    13. Nodes
</h4>
<p>Write a function that counts the nodes with at least 1 child in a binary tree</p>

<ul>
<li>Prototype: <code>size_t binary_tree_nodes(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to count the number of nodes</li>
<li>If <code>tree</code> is <code>NULL</code>, the function must return 0</li>
<li>A <code>NULL</code> pointer is not a node</li>
</ul>

<h4 class="task">
    14. Balance factor
</h4>
 <p>Write a function that measures the balance factor of a binary tree</p>

<ul>
<li>Prototype: <code>int binary_tree_balance(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to measure the balance factor</li>
<li>If <code>tree</code> is <code>NULL</code>, return <code>0</code></li>
</ul>



  <h4 class="task">
    15. Is full
</h4>
 <p>Write a function that checks if a binary tree is full</p>

<ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>


<h4 class="task">
    16. Is perfect
</h4>
<p>Write a function that checks if a binary tree is perfect</p>

<ul>
<li>Prototype: <code>int binary_tree_is_perfect(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
</ul>

  <h4 class="task">
    17. Sibling
</h4>
<p>Write a function that finds the sibling of a node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_sibling(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the sibling</li>
<li>Your function must return a pointer to the sibling node</li>
<li>If <code>node</code> is <code>NULL</code> or the parent is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no sibling, return <code>NULL</code></li>
</ul>

 <h4 class="task">
    18. Uncle
</h4>
<p>Write a function that finds the uncle of a node</p>

<ul>
<li>Prototype: <code>binary_tree_t *binary_tree_uncle(binary_tree_t *node);</code></li>
<li>Where <code>node</code> is a pointer to the node to find the uncle</li>
<li>Your function must return a pointer to the uncle node</li>
<li>If <code>node</code> is <code>NULL</code>, return <code>NULL</code></li>
<li>If <code>node</code> has no uncle, return <code>NULL</code></li>
</ul>

