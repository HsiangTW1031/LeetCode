class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        roman = {"I": 1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        #for key in roman:
            #print(key)
        sum=0
        #temp="A"
        str = len(s)
        for l in range(len(s)):
            input_s=s[l]
            if l == 0:
                temp = "A"
            else:
                temp = s[l-1]
            print("input:",input_s)
            for key in roman:
                if key == input_s:
                    result=roman.get(key)
                    print("ret:",result)
                    sum=sum+result
                    if input_s == "V" or input_s == "X":
                        if temp == "I":
                            sum=sum-2
                            temp = input_s
                    elif input_s == "L" or input_s == "C":
                        if temp == "X":
                            sum=sum-20
                            temp = input_s
                    elif input_s == "D" or input_s == "M":
                        if temp == "C":
                            sum=sum-200
                            temp = input_s
                    else:
                        print("No replace case!!")
                    print("current temp:",temp)
        return sum




        return 0       