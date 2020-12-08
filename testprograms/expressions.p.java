public class expressions{
	public static void main(String[] args){
		int x, y, z;
		x = (3 + 2) + (5 + 2);
		y = ((3 + 2) + x + 3) + 6;
		z = ((3 + 2) + x + 3) + (6 + 3);
		int a, b, c;
		a = (3 + 3) / 2 + ((5 - 6 + 3) / 8);
		a = a >> z;
		a = ~a;
		int[] d = {1, 2, 3, 4, 5};
		int e, f,g, h;
	   	e = d[2] + d[3];
		f = 5;
		g = 6;
		h = c >> d;
		h = c << 5;
		h = c & d;
		h = ~c;
		h = (-5 + -6) + 5 - (3/2);
		String i;
		i = "Hello";
		Boolean j;
		j = true;
	}
}
