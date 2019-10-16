import java.util.Arrays;
public class Anagram
{
    static void isAnagram(String s1, String s2)
    {
        
        String copyOfs1 = s1.replaceAll("\\s", "");
 
        String copyOfs2 = s2.replaceAll("\\s", "");
 
        boolean status = true;
 
        if(copyOfs1.length() != copyOfs2.length())
        {
            status = false;
        }
        else
        {
            char[] s1Array = copyOfs1.toLowerCase().toCharArray();
 
            char[] s2Array = copyOfs2.toLowerCase().toCharArray();
 
            Arrays.sort(s1Array);
 
            Arrays.sort(s2Array)
 
            status = Arrays.equals(s1Array, s2Array);
        }
 
        if(status)
        {
            System.out.println(s1+" and "+s2+" are anagrams");
        }
        else
        {
            System.out.println(s1+" and "+s2+" are not anagrams");
        }
    }
 
    public static void main(String[] args)
    {
        isAnagram("DORMITORY", "Dirty Room");
    }
}
