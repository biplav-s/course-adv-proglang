package mypackage;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class L10RegexExample {

	// Credit: https://www.javatpoint.com/java-regex
	
	public static void main(String[] args) {
		
		String data;
		String pattern;
		Pattern p; 
		Matcher m;
		boolean b;
		
		System.out.println("Example 1 -- ");
		data = "This is something.";
		pattern = "(.)*(is)(.)*";
		
		p = Pattern.compile(pattern);
		m = p.matcher(data); 
		b = m.matches(); 
		
		System.out.println("Does the data - '" + data 
				+ "' matches regex pattern - '" + pattern + "' = " + b );
		
		
		System.out.println("Example 2 -- ");
		data = "This is AdvProg.pdf";
		pattern = "[a-zA-Z_][a-zA-Z_0-9]*\\.[a-zA-Z0-9]+";
			
		p = Pattern.compile(pattern);
		m = p.matcher(data); 
		b = m.matches();

		System.out.println("Does the data - '" + data 
				+ "' matches regex pattern - '" + pattern + "' = " + b );

		System.out.println("Example 3 -- ");
		data = "AdvProg.pdf";
		pattern = "[a-zA-Z_][a-zA-Z_0-9]*\\.[a-zA-Z0-9]+";
			
		p = Pattern.compile(pattern);
		m = p.matcher(data); 
		b = m.matches();

		System.out.println("Does the data - '" + data 
				+ "' matches regex pattern - '" + pattern + "' = " + b );

	}

}
