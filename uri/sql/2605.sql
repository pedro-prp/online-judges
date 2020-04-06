SELECT P.name, V.name
FROM providers V, products P
WHERE P.id_categories = '6'
AND P.id_providers = V.id;
