SELECT C.name, sum(P.amount)
	FROM categories C, products P
	WHERE C.id = P.id_categories
	GROUP BY C.name;


