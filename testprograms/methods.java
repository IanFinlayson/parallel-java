import java.io.*;
public abstract class methods{
	String a;
	int b;
	boolean c;

	public methods(){
	
	}

	public methods(String a, int b, boolean c) throws IOException, ClassNotFoundException{
	
	}

	public static void test(int a){
	}

	abstract void test2(String a);


	private synchronized int test3(){
		return b;
	}

	native protected int test4 (int b);

	protected strictfp String test5(){
		return a;
	}

	boolean test6(){
		return c;
	}
}
