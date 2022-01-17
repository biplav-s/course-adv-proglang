package mypackage;

import java.io.FileInputStream;

/**
 * Created by Biplav Srivastava for CSCE 240
 * Jan 2022.
 */

import java.io.InputStreamReader;
import java.io.BufferedReader;

import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;

public class L3_DemoFileIO {

	// Demonstrate reading and writing of file
	public static void demoReadWriteFile() {

		System.out.println("\n*** DEMO of reading from and writing to file ***\n\n");

		String in_file_name = "data/input.txt";
		String out_file_name = "data/output.txt";

		try {
			FileInputStream fin = new FileInputStream(in_file_name);
			BufferedReader reader = new BufferedReader(new InputStreamReader(fin));

			FileOutputStream fos = new FileOutputStream(out_file_name);
			BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(fos));

			// System.out.println("Reading file line by line using BufferedReader");

			String line = reader.readLine();
			while (line != null) {

				String out_line = "Prefix <-> " + line  + "\n";

				System.out.println("\t Line read - " + line);
				System.out.println("\t\t Line writing - " + out_line);

				// Write the line
				writer.write(out_line);

				// Now read next line
				line = reader.readLine();
			}

			// Close the streams
			reader.close();
			writer.close();

		} catch (Exception e) {
			System.out.println("Exception - " + e);
		}
	}

	public static void main(String[] args) {

		// Invoke the file operation
		demoReadWriteFile();

	}

}
