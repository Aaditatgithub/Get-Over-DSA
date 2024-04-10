# Have written the logic for some ques that i felt the need for, rather had a standard tendency

### 1. Pyramid (1,3,5,7.....,(2n-1) stars)
      -> n-i-1 spaces initially from top to bottom.
      -> print 2i + 1 stars
### 2. Pyramid upside down
      -> i spaces initially from top to bottom.
      -> print 2(n-i) + 1 stars
### 3. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/513cb7c3-24c3-42d4-b70a-2430bb110ca6)
      -> if ((i+j)%2 == 0) print 1
### 4. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/d397b441-b1b9-4762-bf1a-ddeabdb13dfd)
      -> void pattern12(int N)
         {
            // initial no. of spaces in row 1.
            int spaces = 2*(N-1);
            
            // Outer loop for the number of rows.
            for(int i=1;i<=N;i++){
                
                // for printing numbers in each row
                for(int j=1;j<=i;j++){
                    cout<<j;
                }
                
                // for printing spaces in each row
                for(int j = 1;j<=spaces;j++){
                    cout<<" ";
                    
                }
                
                // for printing numbers in each row
                for(int j=i;j>=1;j--){
                    cout<<j;
                }
                
                // As soon as the numbers for each iteration are printed, we move to the
                // next row and give a line break otherwise all numbers
                // would get printed in 1 line.
                cout<<endl;
                
                // After each iteration nos. increase by 2, thus
                // spaces will decrement by 2.
                spaces-=2;
            }
         }

### 5. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/cff31f48-0875-458b-b194-d14452d49cb4)
      -> / Outer loop for the number of rows.
            for(int i=0;i<N;i++){
                
                // for printing the spaces.
                for(int j=0;j<N-i-1;j++){
                    cout<<" ";
                }
                
                // for printing the characters.
                char ch = 'A';
                int breakpoint = (2*i+1)/2;
                for(int j=1;j<=2*i+1;j++){
                    
                    cout<<ch;
                    if(j <= breakpoint) ch++;
                    else ch--;
                }
                
                // for printing the spaces again after characters.
                for(int j=0;j<N-i-1;j++){
                    cout<<" ";
                }
                
                // As soon as the letters for each iteration are printed, we move to the
                // next row and give a line break otherwise all letters
                // would get printed in 1 line.
                cout<<endl;
### 6. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/4d31273d-4e63-4a9c-910e-77fa381e2996)
      -> // Outer loop for the no. of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
              cout<<ch<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
      }
### 7. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/e8064e18-fadd-42f3-b7ef-23c12d8fdc04)
      -> for i (0  to n-1 )
            print n - i stars
            print 2 * i spaces
            print n - i stars
         for ( 0 to n - 1)
            print i + 1 stars
            print (n - i - 1) * 2 spaces
            print i + 1 spaces
### 8. ![image](https://github.com/Aaditatgithub/Strivers-A2Z-DSA-Sheet/assets/131251920/49e81695-8ba4-46f4-af54-b44c97f8c615)
      ->
           // Outer loop for no. of rows
           for(int i=0;i<2*n-1;i++){
               
               // inner loop for no. of columns.
               for(int j=0;j<2*n-1;j++){
                   
                   // Initialising the top, down, left and right indices of a cell.
                   int top = i;
                   int bottom = j;
                   int right = (2*n - 2) - j;
                   int left = (2*n - 2) - i;
                   
                   // Min of 4 directions and then we subtract from n
                   // because previously we would get a pattern whose border
                   // has 0's, but we want with border N's and then decreasing inside.
                   cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
               }
               
               // As soon as the numbers for each iteration are printed, we move to the
               // next row and give a line break otherwise all numbers
               // would get printed in 1 line.
               cout<<endl;
           }
      
      
