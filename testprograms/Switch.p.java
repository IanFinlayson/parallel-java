public class Switch{
	public static void main (String[] args){
		int day = 3;

		switch(day){
			case 1, 2, 3 -> System.out.println("--");
			default -> System.out.println("-");
			case 4 ->{
				Scanner scanner = new Scanner(System.in);
			}
		}
	
		int month = 12;
		switch(month){
			case 1:
			case 2:
			case 3:
			case 12:
				System.out.println("]");
				yield 3;
			default:
				{
					System.out.println("[");
					throw new Exception();
				}
		}

	}
}
