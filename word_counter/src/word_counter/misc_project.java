package word_counter;

/*
 * The following program is a simple word counter using the regex library
 */

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
	}
	
	public int count()
	{
		int count = 0;
		Pattern p = Pattern.compile("[a-zA-Z]+");
		
		Matcher m = p.matcher(getString());
		
		while(m.find())
		{
			m.group();
			count++;
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

class Stack
{
	private Node top = null;
	
	public void push(Node newNode)
	{
		if(newNode == null)
			return;
		
		newNode.next = top;
		top = newNode;
	}
	
	public String pop()
	{
		
		
		
		return "";
	}
	
	class Node
	{
		String data = null;
		Node next = null;
		
		Node(String dataIn)
		{
			data = dataIn;
			next = null;
		}
	}
}