croatian = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

alphabet = input()
count = 0
track_start = 0

while track_start < (len(alphabet)):
    if track_start+3 <= len(alphabet):
        if alphabet[track_start:track_start+3] in croatian:
            #print("1", alphabet[track_start:track_start+3])
            count += 1
            track_start += 3
        elif track_start+2 < len(alphabet):
            if alphabet[track_start:track_start+2] in croatian:
                #print("2-1", alphabet[track_start:track_start+2])
                count += 1
                track_start += 2
            else:
                #print("1-3", alphabet[track_start])
                count += 1
                track_start += 1 
        else:
            #print("3", alphabet[track_start])
            count += 1
            track_start += 1
    elif track_start+2 <= len(alphabet):
        if alphabet[track_start:track_start+2] in croatian:
            #print("2", alphabet[track_start:track_start+2])
            count += 1
            track_start += 2
        else:
            #print("2-3", alphabet[track_start])
            count += 1
            track_start += 1 
    else:
        #print("3", alphabet[track_start])
        count += 1
        track_start += 1

    #print(count)

print(count)