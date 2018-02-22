#include "../catch.hpp"

#include "../../src/Notes/Notes.hpp"

TEST_CASE("A note as a name")
{
    REQUIRE(C.Name() == "C");
    REQUIRE(CSharp.Name() == "C#");
    REQUIRE(DFlat.Name() == "Db");
    REQUIRE(D.Name() == "D");
    REQUIRE(DSharp.Name() == "D#");
    REQUIRE(EFlat.Name() == "Eb");
    REQUIRE(E.Name() == "E");
    REQUIRE(F.Name() == "F");
    REQUIRE(FSharp.Name() == "F#");
    REQUIRE(GFlat.Name() == "Gb");
    REQUIRE(G.Name() == "G");
    REQUIRE(GSharp.Name() == "G#");
    REQUIRE(AFlat.Name() == "Ab");
    REQUIRE(A.Name() == "A");
    REQUIRE(ASharp.Name() == "A#");
    REQUIRE(BFlat.Name() == "Bb");
    REQUIRE(B.Name() == "B");
}