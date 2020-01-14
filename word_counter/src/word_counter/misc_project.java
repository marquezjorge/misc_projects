package word_counter;

import javax.swing.*;
import java.util.Scanner;

public class misc_project 
{
	public static void main(String[] args)
	{
		WordCount test = null;
		
		test.getString();
		System.out.print(test.count());
		
	}
}

class WordCount
{
	private static String userInput = ""; 
	static Scanner input = new Scanner(System.in);
	
	public void getString() 
	{
		System.out.print("Enter a string or paragrahp of text to get word count");
		userInput = input.nextLine();
	}
	
	public int count()
	{
		int count = 0;
		
		for(int i = 0; i < userInput.length() + 1; i++)
		{
			count++;
		}
		
		return count;
	}
	
	
}

// figure out how to read strings with O(n) complexity