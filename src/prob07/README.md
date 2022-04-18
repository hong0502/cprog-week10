### 題目說明：
* 南臺科技大學等第成績轉換。
* 等第成績輸出寬度 6 並靠左對齊。

<img src="./stust.png" width="500">

#### 資料格式：
```text
<科目數> <成績1> <成績2>  ... <成績n>
```

#### 輸出結果：

```text
PS D:\Workspace\cprog-autograding\cprog-week10\src\prob07> cat .\grade1.txt | .\main.exe
B-    A
E     A+
C+    B+    E
A
A+    A     D

PS D:\Workspace\cprog-autograding\cprog-week10\src\prob07> cat .\grade2.txt | .\main.exe
A     B-    A
E     A+
E
A     A+    B+    C
A+    D

PS D:\Workspace\cprog-autograding\cprog-week10\src\prob07> cat .\grade3.txt | .\main.exe
A     
A+    
A     B+    C+    D     B+    
E     D     C     A     
A+    D     
A+    D     B+    
```
