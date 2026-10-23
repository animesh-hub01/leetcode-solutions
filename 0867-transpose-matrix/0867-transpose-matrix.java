class Solution {
    public int[][] transpose(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        
        // The transposed matrix will have dimensions (cols x rows)
        int[][] res = new int[cols][rows];
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                res[j][i] = matrix[i][j];
            }
        }
        
        return res;
    }
}
