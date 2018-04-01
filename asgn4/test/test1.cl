class Main {
	a : Int;
	b : Int;
	c : Int;
	d : Int;
	e : String;
	main () : Int {
		{
			-- c <- a * ~5;
			-- d <- c + a;
			-- b <- ~c;
			-- e <- "anu";
			-- if (a < b;
			a <- 1;
			b <- 10;
			c <- a + b;
			if (a < b) && (a = b) then (c <- a + b) else (c <- a - b) fi;
			while (a < b) loop (a <- a + 4) pool;
			-- KEY_DO KEY_LOOP M Expression KEY_POOL KEY_WHILE BLOCK_BEGIN M Expression BLOCK_END
			do loop (a <- a + 4) pool while{ (a < b) && (a = b) };
			-- KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR M Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP M Expression KEY_POOL
			-- for (a<-5;(a<b);(a<-a+1)) loop (d<-5) pool;
			return {0};
			
		}
	};
};