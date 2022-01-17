package mypackage;

/**
 * Created by Biplav Srivastava for CSCE 240
 * Jan 2022.
 */

import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.io.BufferedReader;

import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class L3_DemoFileCalc {

	// Demonstrate reading and writing of file
	public static void demoReadWriteCalcFile() {

		System.out.println("\n*** DEMO of reading from and writing to file ***\n\n");

		String in_file_name = "data/calc_input.txt";
		String out_file_name = "data/calc_output.txt";

		try {
			FileInputStream fin = new FileInputStream(in_file_name);
			BufferedReader reader = new BufferedReader(new InputStreamReader(fin));

			String line = reader.readLine();
			String oper = line;

			int first_num = Integer.parseInt(reader.readLine());
			int second_num = Integer.parseInt(reader.readLine());
			int result = -1;

			System.out.println("INFO: operation is - " + oper);
			System.out.println("INFO: first num is - " + first_num);
			System.out.println("INFO: second num is - " + second_num);

			if (oper.equalsIgnoreCase("ADD")) {
				result = first_num + second_num;
			} else if (oper.equalsIgnoreCase("SUBTRACT")) {
				result = first_num - second_num;
			}

			// Write result
			FileOutputStream fos = new FileOutputStream(out_file_name);
			BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(fos));

			// Write a line
			String out_line = "Result of operation - " + oper + " on first number - " + first_num + " and second num - "
					+ second_num + " is\n";
			writer.write(out_line);

			// Write a line
			out_line = Integer.toString(result);
			writer.write(out_line);

			System.out.println("\t Line read - " + line);
			System.out.println("\t\t Line writing - " + out_line);

			// Close the streams
			reader.close();
			writer.close();

		} catch (Exception e) {
			System.out.println("Exception - " + e);
		}
	}

	public static void main(String[] args) {

		// Invoke the file operation
		demoReadWriteCalcFile();

	}

}
