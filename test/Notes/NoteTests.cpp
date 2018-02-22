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

TEST_CASE("Should be same note after sharpening and flattening a note")
{
    REQUIRE(C.Sharp().Flat() == C);
    REQUIRE(CSharp.Flat().Sharp() == CSharp);
    REQUIRE(DFlat.Sharp().Flat() == DFlat);
    REQUIRE(D.Sharp().Flat() == D);
    REQUIRE(DSharp.Flat().Sharp() == DSharp);
    REQUIRE(EFlat.Sharp().Flat() == EFlat);
    REQUIRE(E.Sharp().Flat() == E);
    REQUIRE(F.Sharp().Flat() == F);
    REQUIRE(FSharp.Flat().Sharp() == FSharp);
    REQUIRE(GFlat.Sharp().Flat() == GFlat);
    REQUIRE(G.Sharp().Flat() == G);
    REQUIRE(GSharp.Flat().Sharp() == GSharp);
    REQUIRE(AFlat.Sharp().Flat() == AFlat);
    REQUIRE(A.Sharp().Flat() == A);
    REQUIRE(ASharp.Flat().Sharp() == ASharp);
    REQUIRE(BFlat.Sharp().Flat() == BFlat);
    REQUIRE(B.Sharp().Flat() == B);
}

TEST_CASE("Should measure semitones distance")
{
    REQUIRE(C.measureAbsoluteSemitones(C) == 0);
    REQUIRE(C.measureAbsoluteSemitones(CSharp) == 1);
    REQUIRE(C.measureAbsoluteSemitones(DFlat) == 1);
    REQUIRE(C.measureAbsoluteSemitones(D) == 2);
    REQUIRE(C.measureAbsoluteSemitones(DSharp) == 3);
    REQUIRE(C.measureAbsoluteSemitones(EFlat) == 3);
    REQUIRE(C.measureAbsoluteSemitones(F) == 5);
    REQUIRE(C.measureAbsoluteSemitones(FSharp) == 6);
    REQUIRE(C.measureAbsoluteSemitones(GFlat) == 6);
    REQUIRE(C.measureAbsoluteSemitones(G) == 7);
    REQUIRE(C.measureAbsoluteSemitones(GSharp) == 8);
    REQUIRE(C.measureAbsoluteSemitones(AFlat) == 8);
    REQUIRE(C.measureAbsoluteSemitones(A) == 9);
    REQUIRE(C.measureAbsoluteSemitones(ASharp) == 10);
    REQUIRE(C.measureAbsoluteSemitones(BFlat) == 10);
    REQUIRE(C.measureAbsoluteSemitones(B) == 11);
}