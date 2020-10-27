import speedtest

s=speedtest.Speedtest()
def my_down_load():
   a=(s.download())
   a=a // 1000000
   #print("download speed is:{}Mbps",format(a))
   return a
   
def my_up_load():
   a=(s.upload())
   a=a // 1000000
   #print("upload speed is: {}Mbps",format(a))   
   return a
k=int(input("0 for upload and 1 for download speed"))
if k==0:
 x=my_down_load()
 print(format(x)+"mbps")
elif k==1:
 x=my_up_load()
 print(format(x)+"mbps")

