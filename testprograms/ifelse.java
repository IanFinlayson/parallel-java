import java.util.*;

public class ifelse{
	public static void main(String[] args){
		Random random = new Random();

		int b = random.nextInt(50);
		Boolean c = true;

		if(b <= 25){
			System.out.println("<= 25");
		}else if (b >= 25 && b <= 45){
			System.out.println(b);
		}else{
			if ((c == true) && (b > 45)){
				System.out.println("!");
			}
		}		
	}
}
