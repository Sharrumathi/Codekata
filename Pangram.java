import java.util.Scanner;

public class Pangram {
	

	public static void main(String a[])
	 {
		char[] alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
				'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
				'x', 'y', 'z' };
		int a1[] = new int[26];
		Scanner s = new Scanner(System.in);
		System.out.println("enter the string");
		String str = s.nextLine();
		String ch=str.toLowerCase();
		char che[] = str.toCharArray();
		int len = che.length;
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < len; j++) {
				if ((alphabet[i]) == che[j]) {
					a1[i]=1;
				}
			}
		}
		int c=0;
		for(int i=0;i<26;i++) {
			if(a1[i]!=1) {
				c=1;
			}
		}
		if(c==0) {
			System.out.println("pangram");
		}
		else {
			System.out.println("not a pangram");
		}

	}
}
