class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	-- arr : Int[5] <- [7,2,4,5,8];
	-- barr : Int[3] <- [4,2,8];
	-- e : String;
	-- func (anu : Int) : Int {
	-- 	{
	-- 		anu <- 6;
	-- 	}
	-- };
	-- func1 (anu1 : Int) : Int {
	-- 	{
	-- 		anu1 <- 6;
	-- 	}
	-- };
	-- hi (temp : Int) : Int {
	-- 	temp <- 2
	-- };
	-- gi (temp1 : Int) : Int {
	-- 	{
	-- 		temp1 <- 2;
	-- 		a <- hi(temp1);
	-- 	}
	-- };
	main (anu1 : Int) : Int {
		{
			-- c <- a * ~5;
			a <- 5;
			c <- 10;
			d <- c + a;
			-- b <- ~c;
			-- e <- "anu";
			-- d <- 639;
			-- a <- barr[2];
			-- a <- 1 + 2*6+9/8-985+596;
			-- b <- 10;
			-- hi(a);
			-- a <- gi(5);
			-- let anu : Int <- 90, banu : Int <- 0 in {
			-- 	anu <- a + banu
			-- };
			-- banu <- 5;
			-- anu <- 8;
			-- c <- a + b;
			-- if (a < b) && (a = b) then (c <- a + b) else (c <- a - b) fi;
			-- while (a < b) loop (a <- a + 4) pool;
			-- do loop (a <- a + 4) pool while{ (a < b) && (a = b) };
			-- KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR M Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP M Expression KEY_POOL
			-- for (a<-5;(a<b);(a<-a+1)) loop (d<-5) pool;
			return {0};
		}
	};
};

-- class Anu {
-- 	a : Int;
-- 	anu () : Int {
-- 		a <- 5
-- 	};
-- };