/* Binary Search Tree which implements the following:
 * findMax(), removeMax() recursive, findMin() recursive, findMin nonRecursive
 */

public class BinarySearchTree<T extends Comparable<? super T>> // Generic structure handling an unknown type
{

    class BinaryNode<T>
    {
        /**
         * Constructor for the BinaryNode
         */
        BinaryNode(T newElement)
        {
            this(newElement, null, null);
        }
        BinaryNode(T newElement, BinaryNode<T> lt, BinaryNode<T> rt)
        {
            element = newElement;
            left = lt;
            right = rt;
        }
        T element;
        BinaryNode<T> left;
        BinaryNode<T> right;
    }
    protected BinaryNode<T> root;

    /**
     * Constructor for the BinarySearchTree
     */
    public BinarySearchTree()
    {
        root = null;
    }
    public void makeEmpty()
    {
        root = null;
    }
    public boolean isEmpty()
    {
        return root == null;
    }
    public void insert(T x) // public facing insert method
    {
        root = insert(x, root);
    }
    protected BinaryNode<T> insert(T x, BinaryNode<T> t)  // Recursive Insertion Method
    {
        if (t == null)
        {
            return new BinaryNode<T>(x, null, null);
        }
        int compared = x.compareTo(t.element);
        if (compared < 0)
        {
            t.left = insert(x, t.left);
        }
        else if (compared > 0)
        {
            t.right = insert(x, t.right);
        }
        else
        {
            System.out.println("No Duplicates Allowed");
        }
        return t;
    }
    public T findMax()
    {
        return findMax(root).element;
    }
    protected BinaryNode<T> findMax(BinaryNode<T> t)  // (a) Write JAVA code for findMax() - this is non recursive
    {
        if (t != null)
        {
            while (t.right != null) // while there is a node to the right of the current node
            {
                t = t.right; // move to the next node, which is the next larger element
            }
        }
        return t;
    }
    public void removeMax() // the public facing removeMax()
    {
        root = removeMax(root); // use the root as the first node
    }
    protected BinaryNode<T> removeMax(BinaryNode<T> t) // (b) write Java code for removeMax() recursively
    {
        if(t == null)
        {
            return null;
        }
        else if (t.right != null)
        {
            t.right = removeMax(t.right);
            return t;
        }
        return null;
    }
    public T findMin() // the public facing findMin()
    {
        return findMin(root).element;
    }
    protected BinaryNode<T> findMin(BinaryNode<T> t) // (c) FindMin recursive
    {
        if (t == null)
        {
            return null;
        }
        else if (t.left == null)  // if this is the leftmost element
        {
            return t; // then we have reached the smallest element
        }
        return findMin(t.left);
    }
    protected BinaryNode<T> findMinNonRecursive(BinaryNode<T> t) //(d) FindMin non-recursive
    {
        if (t != null)
        {
            while(t.left != null)  // while there is still an element to the left
            {
                t = t.left;  // traverse to the next element to the left
            }
        }
        return t; // return the left most element, which is the smallest element in the tree
    }
    public void printTree()
    {
        if(isEmpty())
        {
            System.out.println("Empty Tree");
        }
        else
        {
            printTree(root);
        }
    }
    protected void printTree(BinaryNode<T> t)
    {
        if (t != null)
        {
            printTree(t.left);
            System.out.println(t.element);
            printTree(t.right);
        }
    }
}