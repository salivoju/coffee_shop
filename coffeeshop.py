X = int(input())
P = int(input())
Final_count = X;
R = (X*P)//100;
Count = X - R; 
Final_count+= Count;
X = Count;
while(Count > 1):
    R = (X*P)//100;
    Count = X - R;
    Final_count += Count;
    X = Count;
print(Final_count);
