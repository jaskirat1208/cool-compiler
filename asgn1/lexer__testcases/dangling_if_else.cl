-- int main(void){
--     int i = 0,a[]={1,2,3};
--     if (i<=3)
--         a[i]++;
--     if (i>=2)
--         a[i]--;
--     else 
--         a[i] = 1;
-- }



class Main {
	main() : Int {
		{
			i : Int <- 0;
			a : Int[] <- [1,2,3];
			if (i <= 3) then
				a[i] <- a[i] + 1
			else
				0
			fi;
			if (i >= 2) then
				a[i] <- a[i] - 1
			else
				a[i] <- 1
			fi;
		}
	};
};