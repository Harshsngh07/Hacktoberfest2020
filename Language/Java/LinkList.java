/**
 * @author deepanshsachdeva
 * 
 * Java class for basic linked list operations
 * 
 * Dependencies: Node.java
 * 
 */
public class LinkList {
    private Node head;
    private Node tail;

    public void add(int value) {
        if (head == null) {
            head = tail = new Node(value);
            System.out.println("Initial item added: "+head.getValue());
        } else {
            Node node = new Node(value);
            node.setNext(head);
            head = node;

            System.out.println("Item added: "+head.getValue());
        }
    }

    public void remove() {
        if (tail == null) {
            System.out.println("Empty linked list");
        } else if (head == tail){
            System.out.println("Last item removed: "+tail.getValue());
            head = tail = null;
        } else {
            System.out.println("Removing: "+tail.getValue());

            Node node = head;
            while (node.getNext() != tail) {
                node = node.getNext();
            }

            node.setNext(null);
            tail = node;
        }
    }

    public void iterate() {
        Node node = head;
        while (node != null) {
            System.out.print(node.getValue()+" ");
            node = node.getNext();
        }
        System.out.println();
    }
}
