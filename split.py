# python split.py
# Splits the raw file into config info and data

with open("DMM5.csv","rb") as f:
	data=f.readlines()
	with open("info.txt","w") as finfo:
		for i,line in enumerate(data):
			if i<21:
				finfo.write(line)
			else:
				break
	with open("DMM5_data.csv","wb") as fout:
		for i,line in enumerate(data):
			if i>=21:
				fout.write(line)
