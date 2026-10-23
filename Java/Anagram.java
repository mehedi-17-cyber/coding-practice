import java.util.*;

public class Anagram {
  public static void main(String... args) {
    
    String a = "listen";
    String b = "silent";
    char[] x = a.toCharArray();
    char[] y = b.toCharArray();
    
    Arrays.sort(x);
    Arrays.sort(y);
    
    if(Arrays.equals(x,y)) {
      System.out.println("They are anagram!");
    }
    else {
      System.out.print("They are not anagram!");
    }
  }
}
