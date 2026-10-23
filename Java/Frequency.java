import java.util.*;

public class Frequency {
  public static void main(String... args) {
    
    int[] arr = {6,1,5,2,5,3,4,1,2,3,3,2};
    Map<Integer,Integer> freq = new HashMap<>();
    
    for(int i : arr) {
      freq.put(i,freq.getOrDefault(i,0)+1);
    }
    System.out.println(freq);
  }
}
