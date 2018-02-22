#include "../catch.hpp"

#include "../../src/Notes/Notes.hpp"

TEST_CASE("Should relate note with its name")
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

TEST_CASE("Should sharp note")
{
    REQUIRE(C.Sharp() == CSharp);
    REQUIRE(CSharp.Sharp() == D);
    REQUIRE(DFlat.Sharp() == D);
    REQUIRE(D.Sharp() == DSharp);
    REQUIRE(DSharp.Sharp() == E);
    REQUIRE(EFlat.Sharp() == E);
    REQUIRE(E.Sharp() == F);
    REQUIRE(F.Sharp() == FSharp);
    REQUIRE(FSharp.Sharp() == G);
    REQUIRE(GFlat.Sharp() == G);
    REQUIRE(G.Sharp() == GSharp);
    REQUIRE(GSharp.Sharp() == A);
    REQUIRE(AFlat.Sharp() == A);
    REQUIRE(A.Sharp() == ASharp);
    REQUIRE(ASharp.Sharp() == B);
    REQUIRE(BFlat.Sharp() == B);
    REQUIRE(B.Sharp() == C);
}

TEST_CASE("Should flat note")
{
    REQUIRE(C.Flat() == B);
    REQUIRE(CSharp.Flat() == C);
    REQUIRE(DFlat.Flat() == C);
    REQUIRE(D.Flat() == DFlat);
    REQUIRE(DSharp.Flat() == D);
    REQUIRE(EFlat.Flat() == D);
    REQUIRE(E.Flat() == EFlat);
    REQUIRE(F.Flat() == E);
    REQUIRE(FSharp.Flat() == F);
    REQUIRE(GFlat.Flat() == F);
    REQUIRE(G.Flat() == GFlat);
    REQUIRE(GSharp.Flat() == G);
    REQUIRE(AFlat.Flat() == G);
    REQUIRE(A.Flat() == AFlat);
    REQUIRE(ASharp.Flat() == A);
    REQUIRE(BFlat.Flat() == A);
    REQUIRE(B.Flat() == BFlat);
}
