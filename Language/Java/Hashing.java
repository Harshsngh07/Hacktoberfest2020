import java.util.*; 
  
class Hashing { 
    public static void main(String args[]) 
    { 
  
        // Create a HashTable to store  
        // String values corresponding to integer keys 
        Hashtable<Integer, String> 
            hm = new Hashtable<Integer, String>(); 
  
        // Input the values 
        hm.put(1, "Geeks"); 
        hm.put(12, "forGeeks"); 
        hm.put(15, "A computer"); 
        hm.put(3, "Portal"); 
  
        // Printing the Hashtable 
        System.out.println(hm); 
    } 
} 