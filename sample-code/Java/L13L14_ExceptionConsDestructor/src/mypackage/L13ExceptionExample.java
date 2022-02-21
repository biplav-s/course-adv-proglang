package mypackage;


public class L13ExceptionExample {

	/**
	 * Print character at index
	 * @param data
	 * @param index
	 */
	public static void demoWithoutException (String data, int index) {
		
		System.out.println("STATUS: Printing without any precaution");
		System.out.println("Character at index = " + index + ", value  = '" + data.charAt(index));
	}
	
	/**
	 * Print character at index with exception
	 * @param data
	 * @param index
	 */
	public static void demoWithException (String data, int index) {
		
		System.out.println("STATUS: Printing with try/ catch");
		
		try {
		System.out.println("Character at index = " + index + ", value  = '" + data.charAt(index));
		} catch (Exception e) {
			System.out.println("ERROR: Caught exception = " + e);
		}
	}
	
	
	public static void main(String[] args) {
		
		
		String data = "Tom";
		int offset = 2;
		
		System.out.println("Data is - '" + data);
		
		
		demoWithoutException(data, offset);
		demoWithException(data, data.length() + offset); 

		
	}

}
