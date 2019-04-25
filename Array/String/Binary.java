 
class Binary{
    public static String addBinary(String a, String b) {
        if(a==null||b==null||a==""||b==""){
            return "";
        }
        int left = 0, lenA = a.length()-1, lenB = b.length()-1;
        String result = "";
        while(lenA>=0 || lenB>=0 || left == 1 ){
            if(lenA>=0){
                left += Integer.parseInt(a.charAt(lenA)+"");
                lenA--;
            }
            if(lenB>=0){
                left += Integer.parseInt(b.charAt(lenB) + "");
                lenB--;
            }
            result = String.valueOf(left%2) + result; 
            left /= 2; 
        }

        return result;

    }
    public static void main(String[] args) {
        String a ="10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101";
        String b ="110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011";
        String result=addBinary(a, b);
        System.out.println(result);

    }
}