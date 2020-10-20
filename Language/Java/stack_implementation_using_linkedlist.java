// Java program for stack implementation using linked list

import java.util.Scanner;

public class ImplementationStackUsingLinkedList {

	public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();	//number of test case
        while (t > 0) {
            MyStack obj = new MyStack();
            int Q = sc.nextInt();	//number of query
            while (Q > 0) {
                int QueryType = 0;
                QueryType = sc.nextInt();	//enter query 1 for push and 2 for pop
                if (QueryType == 1) {
                    int a = sc.nextInt();	//enter element to push
                    obj.push(a);
                } else if (QueryType == 2) {
                    System.out.print(obj.pop() + " ");
                }
                Q--;
            }
            System.out.println("");
            t--;
        }
    }
}
class MyStack {

    StackNode top;

    //code for push element in stack
    void push(int a) {
    	StackNode temp = new StackNode(a);
    	if(top==null) {
    		top = temp;
    	} else {
    		temp.next = top;
    		top = temp;
    	}
    	
    }
    //code for pop element in stack
    int pop() {
    	if(top==null) {
    		return -1;
    	} else {
    		int temp = top.data;
    		top = top.next;
    		return temp;
    	}
    }
}
//linked list class
class StackNode {
    int data;
    StackNode next;
    StackNode(int a) {
        data = a;
        next = null;
    }
}
