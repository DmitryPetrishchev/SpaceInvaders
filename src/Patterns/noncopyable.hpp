#pragma once

class noncopyable
{
protected:
  constexpr noncopyable() = default;
  ~noncopyable() = default;

  noncopyable(noncopyable const &) = delete;
  noncopyable & operator =(noncopyable const &) = delete;
};