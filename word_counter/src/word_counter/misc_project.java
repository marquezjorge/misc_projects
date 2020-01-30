package word_counter;

import java.util.Scanner;
import java.util.regex.*;

public class misc_project 
{
	public static void main(String[] args)
	{
		WordCount test = new WordCount();
		test.getUserString();
		System.out.print(test.count());
		
	}
}

class WordCount
{
	private static String userInput = ""; 
	static Scanner input = new Scanner(System.in);
	
	public WordCount()
	{
		userInput = "";
	}
	
	public void getUserString() 
	{
		System.out.println("Enter a string or paragrahp of text to get word count");
		System.out.print("-> ");
		setString(input.nextLine());
		//userInput = input.nextLine();
	}
	
	public int count()
	{
		int count = 0;
		Pattern p = Pattern.compile("a-zA-Z");
		
		for(int i = 0; i < userInput.length() + 1; i++)
		{
			Matcher m = p.matcher(getString());
		}
		
		return count;
	}
	
	private void setString(String inputIn) 
	{
		userInput = inputIn;
	}
	
	private String getString()
	{
		return userInput;
	}
}