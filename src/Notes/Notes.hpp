#ifndef VANEPS_NOTES_H
#define VANEPS_NOTES_H

#include <string>
#include <map>

enum Pitch
{
    C_PITCH = 0,
    CSharp_PITCH,
    DFlat_PITCH,
    D_PITCH,
    DSHARP_PITCH,
    EFlat_PITCH,
    E_PITCH,
    F_PITCH,
    FSHARP_PITCH,
    GFLAT_PITCH,
    G_PITCH,
    GSHARP_PITCH,
    AFLAT_PITCH,
    A_PITCH,
    ASHARP_PITCH,
    BFLAT_PITCH,
    B_PITCH
};

class Note
{
public:
    constexpr Note(enum Pitch pitch) : pitch(pitch) {}

    std::string Name() const;
    Pitch Pitch() const;
    Note Sharp() const;
    Note Flat() const;

private:
    enum Pitch pitch;

    Note(enum Pitch pitch, std::string name);
};

constexpr Note C(C_PITCH);
constexpr Note CSharp(CSharp_PITCH);
constexpr Note DFlat(DFlat_PITCH);
constexpr Note D(D_PITCH);
constexpr Note DSharp(DSHARP_PITCH);
constexpr Note EFlat(EFlat_PITCH);
constexpr Note E(E_PITCH);
constexpr Note F(F_PITCH);
constexpr Note FSharp(FSHARP_PITCH);
constexpr Note GFlat(GFLAT_PITCH);
constexpr Note G(G_PITCH);
constexpr Note GSharp(GSHARP_PITCH);
constexpr Note AFlat(AFLAT_PITCH);
constexpr Note A(A_PITCH);
constexpr Note ASharp(ASHARP_PITCH);
constexpr Note BFlat(BFLAT_PITCH);
constexpr Note B(B_PITCH);

#endif //VANEPS_NOTES_H
