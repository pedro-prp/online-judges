SELECT P.id, P.name
FROM products P, categories C
WHERE P.id_categories = C.id
AND C.name like 'super%';
