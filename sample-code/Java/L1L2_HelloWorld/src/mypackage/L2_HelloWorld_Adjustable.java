package mypackage;

public class L2_HelloWorld_Adjustable {

	public static void main(String[] args) {
		
		// This is a comment
		
		String s = "HelloWorld in Java";
		System.out.println(s);
		
		// args has the arguments passed as a list. Get total arguments
		for (int i=0; i<args.length; i++) {
			System.out.println("\t location = " + i + ": " + args[i]);
			s += " " + args[i];
		}
		
		// Print final string
		System.out.println(s);
	}

}



    
