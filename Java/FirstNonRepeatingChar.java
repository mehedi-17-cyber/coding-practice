import java.util.*;

public class FirstNonRepeatingChar {
  public static void main(String... args) {
    
    String s = "aabbcdd";
    Map<Character,Integer> freq = new LinkedHashMap<>();
    for(char c : s.toCharArray()) {
      freq.put(c,freq.getOrDefault(c,0)+1);
    }
    
    for(char c : freq.keySet()) {
      if(freq.get(c) == 1) {
        System.out.println("First non-repeating character : "+c);
        break;
      }
    }
  }
}