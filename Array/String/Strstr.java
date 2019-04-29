class Strstr{
    
    public static int strStr(String haystack, String needle) {
        for(int i=0; i<haystack.length();i++){
            for(int j=0; j<needle.length();j++){
                if(haystack.charAt(i)!=needle.charAt(j)){
                    break;
                }
            }
            return i;
        }
        return -1;
    }

    public static void main(String[] args) {
        String a = "hello", b = "ll";
        System.out.println(strStr(a,b));

    }
}