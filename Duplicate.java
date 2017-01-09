public class New{
  public static void main(String a[])
  {
    String strArray[]={"aaa","bbb","ccc","ccc","ddd"};
      for(int i=0;i<strArray.length-1;i++){
for(int j=i+1;j<strArray.length;j++){
if(strArray[i].equals(strArray[j])) && (i!=j)) {
System.out.Println("Duplicate Element is "+strArray[j]);
}
}
}
}
}
