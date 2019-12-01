"""
Finding the first 100 polygonal numbers with sides between 3 and 10000


~~Documentation~~
https://en.wikipedia.org/wiki/Polygonal_number

~~Links~~
GitHub: https://github.com/DanielNicolae
Google Play: https://play.google.com/store/apps/developer?id=Don%C8%9Bu+Daniel+Nicolae
YouTube: https://www.youtube.com/channel/UCdxZEh4oSEsxDRc8MsTawjw?view_as=subscriber
GrabCad: https://grabcad.com/don.u.daniel.nicolae-1
WordPress: https://daniel25site.wordpress.com/
DeviantArt: http://free-gamer4ever.deviantart.com/

~~Author~~
Donțu Daniel Nicolae 2019
"""

def Triangular_numbers():
    for i in range(1,101):
        number = (i*i+i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)
    
def Square_numbers():
    for i in range(1,101):
        number = i*i
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Pentagonal_numbers():
    for i in range(1,101):
        number = (3*i*i-i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Hexagonal_numbers():
    for i in range(1,101):
        number = (4*i*i-2*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Heptagonal_numbers():
    for i in range(1,101):
        number = (5*i*i-3*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Octagonal_numbers():
    for i in range(1,101):
        number = (6*i*i-4*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Nonagonal_numbers():
    for i in range(1,101):
        number = (7*i*i-5*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Decagonal_numbers():
    for i in range(1,101):
        number = (8*i*i-6*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Hendecagonal_numbers():
    for i in range(1,101):
        number = (9*i*i-7*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Dodecagonal_numbers():
    for i in range(1,101):
        number = (10*i*i-8*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Tridecagonal_numbers():
    for i in range(1,101):
        number = (11*i*i-9*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Tetradecagonal_numbers():
    for i in range(1,101):
        number = (12*i*i-10*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Pentadecagonal_numbers():
    for i in range(1,101):
        number = (13*i*i-11*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Hexadecagonal_numbers():
    for i in range(1,101):
        number = (14*i*i-12*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Heptadecagonal_numbers():
    for i in range(1,101):
        number = (15*i*i-13*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Octadecagonal_numbers():
    for i in range(1,101):
        number = (16*i*i-14*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Enneadecagonal_numbers():
    for i in range(1,101):
        number = (17*i*i-15*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Icosagonal_numbers():
    for i in range(1,101):
        number = (18*i*i-16*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Icosihenagonal_numbers():
    for i in range(1,101):
        number = (19*i*i-17*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Icosidigonal_numbers():
    for i in range(1,101):
        number = (20*i*i-18*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Icositrigonal_numbers():
    for i in range(1,101):
        number = (21*i*i-19*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Icositetragonal_numbers():
    for i in range(1,101):
        number = (22*i*i-20*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)

def Polygonal_numbers():
    sides=int(input('Choose the number of sides for the polygon (between 4 and 10000).\n'))
    if(sides<3 or sides>10000):
        sides=int(input('Insert a number between 4 and 10000.\n'))
    print("The first 100 polygonal numbers with "+str(sides)+" sides are:")
    for i in range(1,101):
        number = ((sides-2)*i*i-(sides-4)*i)/2
        nums=[]
        nums.insert(i,int(number))
        print (nums)
        
print('Enter a number between 3 and 24 to calculate the first 100 polygonal numbers that have between 3 and 24 sides.\n')
number=input('For polygonal numbers with sides greater than 24, please enter the number 25.\n')
a=int(number)
if a==3:
    print("The first 100 triangular numbers are:")
    Triangular_numbers()
elif a==4:
    print("The first 100 square numbers are:")
    Square_numbers()
elif a==5:
    print("The first 100 pentagonal numbers are:")
    Pentagonal_numbers()
elif a==6:
    print("The first 100 hexagonal numbers are:")
    Hexagonal_numbers()
elif a==7:
    print("The first 100 heptagonal numbers are:")
    Heptagonal_numbers()
elif a==8:
    print("The first 100 octagonal numbers are:")
    Octagonal_numbers()
elif a==9:
    print("The first 100 nonagonal numbers are:")
    Nonagonal_numbers()
elif a==10:
    print("The first 100 decagonal numbers are:")
    Decagonal_numbers()
elif a==11:
    print("The first 100 hendecagonal numbers are:")
    Hendecagonal_numbers()
elif a==12:
    print("The first 100 dodecagonal numbers are:")
    Dodecagonal_numbers()
elif a==13:
    print("The first 100 tridecagonal numbers are:")
    Tridecagonal_numbers()
elif a==14:
    print("The first 100 tetradecagonal numbers are:")
    Tetradegonal_numbers()
elif a==15:
    print("The first 100 pentadecagonal numbers are:")
    Pentadecagonal_numbers()
elif a==16:
    print("The first 100 hexadecagonal numbers are:")
    Hexadecagonal_numbers()
elif a==17:
    print("The first 100 heptadecagonal numbers are:")
    Heptadecagonal_numbers()
elif a==18:
    print("The first 100 octadecagonal numbers are:")
    Octadecagonal_numbers()
elif a==19:
    print("The first 100 enneadecagonal numbers are:")
    Enneadecagonal_numbers()
elif a==20:
    print("The first 100 icosagonal numbers are:")
    Icosagonal_numbers()
elif a==21:
    print("The first 100 icosihenagonal numbers are:")
    Icosihenagonal_numbers()
elif a==22:
    print("The first 100 icosidigonal numbers are:")
    Icosidigonal_numbers()
elif a==23:
    print("The first 100 icositrigonal numbers are:")
    Icositrigonal_numbers()
elif a==24:
    print("The first 100 icositetragonal numbers are:")
    Icositetragonal_numbers()
elif a==25:
    Polygonal_numbers()
