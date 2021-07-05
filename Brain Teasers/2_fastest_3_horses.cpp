// You have 25 horses
// At max 5 horses can run a race together
// How many races min needs to be conducted to determine fastest 3 horses?


// Divide horses into 5 groups of 5 each and have race. 
//     1   2   3   4   5
// A   A1  A2  A3  A4  A5 
// B   B1  B2  B3  B4  B5 
// C   C1  C2  C3  C4  C5 
// D   D1  D2  D3  D4  D5 
// E   E1  E2  E3  E4  E5 
// Therefore 5 races

// Let the results be 
// A1>A2>A3
// B1>B2>B3
// C1>C2>C3
// D1>D2>D3
// E1>E2>E3

// Another race of all winners(A1,B1,C1,D1,E1)
// The winner is fastest of all 25 horses
// Let the results be A1>B1>C1
// Therefore 6 races

// Second fastest can be A2 or B1
// Third fastest can be B2,A3,C1 or loser among (A2 and B1)
// Last race among A2,B1,A3,B2,C1
// Therefore 7 races : TOTAL




