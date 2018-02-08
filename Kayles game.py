a=[0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9]
b=['-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-']
c=1


while True:
    print(a)
    
    if c%2==1:
        print("player 1")
        j=int(input("How many tokens do you want to remove?"))
        y=int(input("Enter first token: "))
        if j==1:
            a[y]='-'
        elif j==2:
            a[y]='-'
            a[y+1]='-'
            
         
    if c%2==0:
        print("player 2")
        j=int(input("How many tokens do you want to remove?"))
        y=int(input("Enter first token: "))
        
        if j==1:
            a[y]='-'
        elif j==2:
            a[y]='-'
            a[y+1]='-'
    if a==b:
         if(c%2==1):
             print("player 1 wins!!")
         if(c%2==0):
             print("player 2 wins!!")
         break   
         
    c=c+1
