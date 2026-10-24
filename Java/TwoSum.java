import java.util.*;

public class TwoSum {
  public static void main(String... args) {
    
    int[] arr = {3,6,4,2,4,7,2,8,5};
    int target = 7;
    Map<Integer,Integer> map = new HashMap<>();
    
    for(int i = 0; i < arr.length; i++) {
      int need = target - arr[i];
      if(map.containsKey(need)) {
        System.out.println(map.get(need)+","+i);
        break;
      }
      map.put(arr[i],i);
    }
  }
}