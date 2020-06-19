import java.io.*;
import java.util.*;

public class trycatch{
	public static void main (String[] args){
		try{
			File file = new File(args[0]);
			Scanner scanner = new Scanner(file);
		}catch(FileNotFoundException e){
			
		}

		try{
			File file = new File (args[0]);
			Scanner scanner = new Scanner(file);
		}catch(FileNotFoundException e){
			System.out.println("File not found");	
		}

	}
}
