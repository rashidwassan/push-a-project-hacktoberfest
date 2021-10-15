import java.util.*;

public class LinkedList {
    public static void main(String args[]) {

        java.util.LinkedList<String> ll = new java.util.LinkedList<String>();
        
        ll.add("Hasiya");
        ll.add("Pubba");
        ll.add("Sonna");


        //Traversing the list of elements in reverse order
        Iterator i = ll.descendingIterator();

        while (i.hasNext()) {
            System.out.println(i.next());
        }
    }
}