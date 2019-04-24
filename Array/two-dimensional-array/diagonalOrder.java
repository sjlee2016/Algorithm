class diagonalOrder {
        public static int[] findDiagonalOrder(int[][] matrix) {
            int r = 0, c = 0;
            int row = matrix.length;
            if(row==0){
                return new int[0];
            }
            int column = matrix[0].length;
            int[] result = new int[row*column];
            for(int i =0; i<row*column; i++){
                result[i] = matrix[r][c];
                 if((r+c)%2==0){
                    // move right, up 
                if(c==column-1){
                  r++;
                }else if(r==0){
                    c++;
                }else{
                    c++;
                    r--;
                }
             }else{
                 // move left, down 
               if(r==row-1){
                   c++;
               }else if(c==0){
                   r++;
               }else{
                   c--;
                   r++;
               }
            }
            }
            return result;
        }
    
    public static void main(String[] args) {
        int[][] arr = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
        int [] result = findDiagonalOrder(arr);
        for(int i=0;i<result.length;i++){
            System.out.print(result[i] + " ");
        }
        System.out.println();
    }
}